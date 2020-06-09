import os

caminho = os.listdir('D:\\')
os.makedirs('./txt')
os.makedirs('./png')
os.makedirs('./jpg')
os.makedirs('./mp4')
os.makedirs('./gif')

for x in caminho:
    if str(x).find('.txt'):


# print(caminho)