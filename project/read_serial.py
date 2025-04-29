import serial
import time
import string

ser = serial.Serial('/dev/cu.usbserial-0001', 115200)
time.sleep(2)


try:
    while True:
        if ser.in_waiting > 0:
            line = ser.readline().decode('utf-8', errors='ignore').strip()
            print(f"Received: {line}")
            bpm = line.strip(string.ascii_letters)
            
            # Optional: Save to file
            with open("data_log.txt", "a") as f:
                f.write(line + "\n")
except KeyboardInterrupt:
    print("Exiting...")
finally:
    ser.close()
