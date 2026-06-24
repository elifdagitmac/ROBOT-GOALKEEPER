# Robot Goalkeeper

An Arduino-based reflex game that translates human hand movements via joystick 
into precise mechanical servo motor actions with high response speed.

## Objective
Achieve accurate human-machine interaction by converting analog joystick input 
into digital servo control signals in real time.

## Hardware Components
| Component | Quantity |
|---|---|
| Arduino UNO | 1 |
| Dual-axis Joystick | 1 |
| Servo Motor | 1 |
| Jumper Cables | — |

## Wiring
| Component | Pin |
|---|---|
| Joystick VRX | A0 |
| Servo Motor Signal | Pin 5 |

## How It Works
1. Joystick analog value is read from pin A0 (range: 0–1023)
2. Value is mapped to servo angle (0°–180°) using Arduino's `map()` function
3. Servo motor moves to the calculated angle in real time

## Getting Started
1. Connect components according to the wiring table above
2. Open `sketch_dec24a.ino` in Arduino IDE
3. Select **Arduino UNO** as board and your COM port
4. Upload and play
