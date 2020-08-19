import random
# board=[' ']*10
def clear_output():
  print('\n'*13)
def display_board(board):
  clear_output()
  print(f'{board[7]} | {board[8]} | {board[9]}')
  print('--|---|--')
  print(f'{board[4]} | {board[5]} | {board[6]}')
  print('--|---|--')
  print(f'{board[1]} | {board[2]} | {board[3]}')

# test_board=['#','X','O','X','O','X','O','X','O','X']
# display_board(board)
# display_board(board)
# x=input()



def player_input():
  marker=''
  while not (marker == 'X' or marker == 'O'):
    marker=input('Player 1, choose X or O : ').upper()
    player1=marker
    if player1=='X':
     return('X','O')
    else:
      return('O','X')



# player1,player2=player_input()
# print(player1,player2)


def place_marker(board,marker,position):
  board[position]=marker





# display_board(board)

# place_marker(test_board,'G',8)
# display_board(test_board)

def win_check(board,mark):
  win_list=[[7,8,9],[4,5,6],[1,2,3],[7,4,1],[8,5,2],[9,6,3],[7,5,3],[9,5,1]]
  for i in win_list:
    if(board[i[0]]==mark and board[i[1]]==mark and board[i[2]]==mark ):
      return True
  return False
# print(win_check(test_board,'O'))


def space_check(board,position):
  return board[position]== ' '


def choose_first():
  flip=random.randint(0,1)
  if flip==0:
    return 'Player 1'
  else:
    return 'Player 2'



def full_board_check(board):
  for i in range(1,10):
    if space_check(board,i):
      return False
  return True


def player_choice(board):
  position=0
  while position not in range(1,10) or not space_check(board,position):
    position=int(input('Choose a position : (1-9) '))
  return position

def replay():
  choice=input('Play again? Enter Yes or No ').lower()
  return choice=='yes'


print('Welcome to Tic Tac Toe ')
while True:
  the_board=[' ']*10
  player1_marker,player2_marker=player_input()
  turn=choose_first()
  print(turn + ' will go first')
  play_game=input('Ready to play? y or n? ')
  if play_game=='y':
    game_on=True
  else:
    game_on=False
  
  while game_on:
    if turn =='Player 1':
      display_board(the_board)
      position=player_choice(the_board)
      place_marker(the_board,player1_marker,position)
      if(win_check(the_board,player1_marker)):
        display_board(the_board)
        print('PLAYER 1 HAS WON!!')
        game_on=False
      else:
        if full_board_check(the_board):
          display_board(the_board)
          print("TIE GAME")
          game_on=False
        else:
          turn='Player 2'


    else:
      display_board(the_board)
      position=player_choice(the_board)
      place_marker(the_board,player2_marker,position)
      if(win_check(the_board,player2_marker)):
        display_board(the_board)
        print('PLAYER 2 HAS WON!!')
        game_on=False
      else:
        if full_board_check(the_board):
          display_board(the_board)
          print("TIE GAME")
          game_on=False
        else:
          turn='Player 1'
      






  if not replay():
    break