												CẢM BIẾN SIÊU ÂM

1. Giới thiệu
	- Cảm biến siêu âm sử dụng sóng siêu âm để xác định khoảng cách tới đối tượng giống như dơi và cá heo
	- Đây là thiết bị đo lường không tiếp xúc, sử dụng nguyên lý phản xạ sóng siêu âm
	- Cảm biến siêu âm HC-SR04 có thể đo khoảng cách trong khoảng từ 2 - 400cm với độ chính xác 3mm
	- Gồm 4 chân: 
		+ VCC - 5V
		+ Trig (Chân điều khiển phát)
		+ Echo (Chân nhận tín hiệu phản hồi)
		+ GND
	
	- Nguyên lý hoạt động: 
		+ Cảm biến sẽ phát ra 1 sóng siêu âm với tần số 40KHz.
		+ Nếu có chướng ngại vật trên đường đi , sóng siêu âm sẽ phản xạ lại và tác động lên module nhận sóng.
	
2. Cấu hình hardware
	2.1 Linh kiện:
		- Arduino
		- HC-SR04 (Cảm biến siêu âm)

	2.2 Cách mắc mạch
		- VCC - 5V
		- GND
		- Trig - 5
		- Echo -3


													CẢM BIẾN HỒNG NGOẠI SỐ PHÁT HIỆN DI CHUYỂN
	

1. Giới thiệu
	- Là thiết bị được sử dụng để phát hiện di chuyển
	- Nó gồm có một cảm biến điện tử xác định chuyển động và được tích hợp hoặc được kết nối với các thiệt bị khác nhằm cảnh báo người sử dụng sự có mặt của đối tượng di chuyển trong vùng làm việc của cảm biến.
	- Là một linh kiện quan trọng của hệ thống an ninh
	- Cảm biến di chuyển hồng ngoại cho phép bạn cảm nhận di chuyển, nó hầu như thường được sử dụng để phát hiện người di chuyển trong tầm hoặc ngoài tầm của cảm biến.

2. Cấu hình hardware
	2.1 Linh kiện :
		- Arduino
		- HC- SR501 (cảm biến hồng ngoại phát hiện di chuyển)
		- LED
		- Điện trở 
	
	2.2 Cách mắc mạch:
		HC-SR501:
			- VCC - 5V
			- GND
			- OUT - 2
		 
		 LED:
		 	- (+) - trở - 13
			- (-) - GND