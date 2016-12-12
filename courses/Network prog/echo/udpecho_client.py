import socket

numerofpackets = int(raw_input("How many packets should be sent?\n> "))
hostname = 'localhost'
i = 0

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

while i < numerofpackets:
    start_time = time.time()
    s.sendto('udp', (hostname, 50000)) 
    response, serverAddress = s.recvfrom(1024)
    print time.time() - start_time
    i = i + 1

s.close()