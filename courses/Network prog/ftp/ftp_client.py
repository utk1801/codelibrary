import socket
import sys

s = socket.socket()
s.connect(("localhost",12100))
f=open("sample.txt", "rb") 
l = f.read(1024)
while (l):
    s.send(l)
    l = f.read(1024)
s.close()
