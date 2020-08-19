import docx
doc = docx.Document('test.docx')
print(doc.paragraphs[0].text)
