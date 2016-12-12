import socket

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
host = socket.gethostname()
port = 9999

s.connect((host,port))
print s.recvfrom(30000)
s.close