import socket

host = '192.168.2.108'
port = 51234
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((host, port))
s.sendall(b'646CB36463')
print("dados enviados")
