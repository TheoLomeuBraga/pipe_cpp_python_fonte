import os

#criar mensagem
arquivo = open('mensagem_python', 'w')
arquivo.write('essa e uma mensagem do python')
arquivo.close()
print("mensagem enviada")

#ler mensagem C++
mensagem_cpp_pode_ser_lida = False
while mensagem_cpp_pode_ser_lida == False:
    mensagem_cpp_pode_ser_lida = os.access('mensagem_cpp', os.R_OK)
print("lendo mensagem c++")
print(open('mensagem_cpp').read())

