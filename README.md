# STM32 Parking Assist System

## 프로젝트 소개

STM32 NUCLEO-F103RB 기반의 Parking Assist System입니다.

HC-SR04 초음파 센서를 이용하여 장애물과의 거리를 측정하고, 거리에 따라 **SAFE / CAUTION / DANGER** 상태를 판단합니다.

또한 LED, Active Buzzer, SSD1306 OLED를 통해 주차 상태를 실시간으로 안내하며, UART를 이용하여 거리 및 상태를 출력할 수 있습니다.

---

## 주요 기능

* HC-SR04P(초음파 센서)를 이용한 실시간 거리 측정
* 거리 기반 SAFE / CAUTION / DANGER 상태 판단
* LED를 이용한 상태 표시
* Active Buzzer를 이용한 경고음 출력
* SSD1306 OLED를 통한 거리 및 상태 표시
* UART를 통한 거리 및 상태 출력 (디버깅)

---

## 사용 부품

* STM32 NUCLEO-F103RB
* HC-SR04P Ultrasonic Sensor
* SSD1306 OLED (I2C)
* Active Buzzer
* LED × 3
* Breadboard
* Jumper Wire

---

## 개발 환경

* STM32CubeIDE
* STM32 HAL Driver
* Language : C

---

## 동작 기준

| 거리      | 상태    | LED    | 부저 |
| --------- | ------- | ------ | ---- |
| > 10 cm   | SAFE    | Green  | OFF  |
| 5 ~ 10 cm | CAUTION | Yellow | BEEP |
| ≤ 5 cm    | DANGER  | Red    | ON   |

> ※ 시연 편의를 위해 테스트 시 거리 기준을 **10 cm / 5 cm**로 설정하였습니다.

---

## 프로젝트 구조

* HC-SR04P 거리 측정
* Parking State 관리
* LED 상태 제어
* Active Buzzer 제어
* SSD1306 OLED 상태 출력
* UART 디버깅 출력
