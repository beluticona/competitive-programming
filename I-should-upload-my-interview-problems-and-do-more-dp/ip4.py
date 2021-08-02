

'124.45.23.0'-> 32bits
4 numbers of 8 bits -> number of 32 bits

0011 0 A

0100 23 B

0011 45 C

0011 124 D

D.C.B.A -> A*2**0 + B*2**8 + C*2*16 + D**24


def string_IP4(ip_direction):
	numbers_in_decreasing_position = ip_direction.split('.')
	number = map(int(), numbers_in_decreasing_position)	
	powers = [ 8*numbers_in_ip_dir for numbers_in_ip_dir in range(4)]
	number_to_sum = [number[i]*(2**powers[i])]
	return number_to_sum.sum()



input:
	0.0.0.0
	



