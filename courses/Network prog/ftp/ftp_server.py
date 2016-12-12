import socket
import sys

s = socket.socket()
s.bind(("localhost",12100))
s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
s.listen(10) 

while True:
    sc, address = s.accept()

    print address
    print "Receiving File .... "
    print "File Received ...."
    i=1
    f = open('file_'+ str(i)+".txt",'wb') #open in binary
    i=i+1
    while (True):       
        l = sc.recv(1024)
        while (l):
                f.write(l)
                l = sc.recv(1024)
    f.close()


    sc.close()

s.close()
