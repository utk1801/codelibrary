sudp = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

sudp.bind(("", 50000)) 
while True: 
    daten, addr = sudp.recvfrom(1024)
    s.sendto(daten, addr)

s.close()