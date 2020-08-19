#include<iostream>

using namespace std;

template <class T>

class Array{

    private:
        T arr [];
        int len =0; //length user thinks array is 
        int capacity =0; //Actual array size
    
    public:
        Array(){ this(16);}

        Array(int capacity){
            if(capacity < 0) throw new invalid_argument("Illegal capacity: "+capacity);
            this.capacity = capacity;
            arr = (T[]) new T[capacity];
        }

        int size(){ return len;}
        bool isEmpty(){ return size()==0;}
        
        T get(int index){ return arr[index];}
        void set(int index, T elem){arr[index]= elem;}

        void clear(){
            for(int i =0;i<capacity;i++)
                arr[i]=NULL;
            len =0;
        }

        void add(T elem){
            if(len+1 >= capacity){
                if(capacity ==0) capacity =1;
                else capacity *=2;
                T new_arr[]= (T[]) new T[capacity];
                for(int i=0;i<len;i++)
                    new_arr[i]= arr[i];
                arr=new_arr;
            }

            arr[len++]=elem;
        }
        
        T removeAt(int rm_index){
            if(rm_index >= len && rm_index < 0) throw new invalid_argument("Index-Out-Bound-Exception");
            T data = arr[rm_index];
            T new_arr[] = (T[]) new T[len-1];
            for(int i=0,j=0;i<len;i++,j++)
                if(i==rm_index)j--;
                else new_arr[j]=arr[i];
            arr=new_arr;
            capacity = --len;
            return data;
        }

        bool remove(T obj){
            for(int i=0;i<len;i++){
                if(arr[i].equals(obj))
                    return i;
                return -1;
            }
        }

        bool contains(T obj){
            return find(obj) != -1;
        }


};

int main(){

    Array<int> A[]= new Array<int>;
    return 0;
}

