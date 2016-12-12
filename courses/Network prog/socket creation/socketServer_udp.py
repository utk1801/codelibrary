import socket

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
host = socket.gethostname()
port = 9999
s.bind((host,port))

s.listen(5)
while True:
	c, addr = s.accept()
	print 'got UDP connection from', addr
	c.sendto("Connected")
	c.close()