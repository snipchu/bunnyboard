# bunnyboard
this is a custom stenography keyboard i built with [hackclub's onboard grant](https://onboard.hackclub.com)!

## specs and other stuff
- powered by a Raspberry Pi Pico
- runs QMK firmware
- uses Kailh choc v1 switches

## keyboard layout
the keyboard layout is almost identical to "The Uni" stenokeyboard, except for the top-left key (which is a "#" instead of an "S").
.------------------------------------------------.
| # | T | P | H | * |    | * | F | P | L | T | D |
| S | K | W | R | * |    | * | R | B | G | S | Z |
'-------| # | A | O |    | E | U | # |-----------'
        '----------------------------'
## how to get this keyboard
1. get the pcb and solder the components
   - PCB gerber located at "/keyboard/production/gerber.zip
   - components needed:
     - 28 kailh v1 choc switches + keycaps (i got mine for $32 USD at chosfox!)
     - raspberry pi pico + header pins
     - 28 1N4148 Diodes (you can choose to have them soldered on if you're using JLCPCB)
2. install the QMK firmware (read [here](https://docs.qmk.fm/newbs_flashing) for more info)
3. install/setup plover (see a tutorial [here](https://docs.stenokeyboards.com/guides/))
  - select "Gemini PR" as your keyboard
  - set output to "Enabled"
4. profit
