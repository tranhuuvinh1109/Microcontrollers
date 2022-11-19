						CẢM BIẾN NHIỆT ĐỘ SỐ

DS18B20
	- Ưu điểm:
		+ Đơn giản sử dụng , được bố trí ở khu vực rộng
		+ Cảm biến được cấp nguôn fbene ngoài qua chân VCC
		+ Không yêu cầu MOSFET pull-up
		+ 1-Wirre được tự do mang các tín hiệu khác khi nhiệt độ được chuyển đổi
	
	- Ứng dụng:
		+ Rất thuận lợi cho điều khiển ở môi trường HV AC, giám sát nhiệt độ trong các toà nhà cácthieets bị máy móc.
		

	- Link kiện:
		+ Arduino R3
		+ DFR0024 (DS18B20) cảm biến nhiệt độ số
		+ DFR0032 (Loa)

	- Cài đặt phần cứng:
		// DFR0024 (DS18B20):
			+ VCC - 5V
			+ GND
			+ Ngõ ra - PIN3

		// DFR0032 (loa):
			+ VCC - 5V
			+ GND
			+ Ngõ ra - PIN4
		
	- Code:
		+ Tải thư viện OneWire.h
		+ Link (http://www.pjrc.com/teensy/arduino_libraries/OneWire.zip) -> Rồi đưa thư viện vào Arduino IDE với đường dẫn “Sketch → Include Library → Library Manager.” 
