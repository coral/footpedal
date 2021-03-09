Working remotely is draining in many ways but endless video conferencing is probably what one will miss the least about this entire experience. I've also learned that very few people seem to have grown up with long form voice conferencing and is as a result absolutely terrible at muting when not speaking. I've sat through so many meetings where people fail at muting and has microphones that sounds like they are screaming while skydiving next to a helicopter.

My theory around this is that personal video conferencing quality is tied to ones organizational level. In general: **The higher up you are in the company organizational structure you are, the shittier your AV setup is.** (Coral's law for short).

Growing up with Ventrilo -> Teamspeak -> Discord has teached one the importance of using PTT (Push To Talk). It might sound annoying to have to hold a button everytime you want to speak but after a short time it becomes second nature, even to the point where I will press this button even though the application I'm using at the moment doesn't support PTT.

Using PTT can be annoying at times. When trying to type at the same time as talking or not having your hands close to the PTT button is frustrating. A friend gave me the advice to try using a foot pedal, however I couldn't find one that fit my requirements. I wanted one that could map to any obscure button without using active software to trigger the button. The ones that did were too expensive, which leaves me with only one option: building one myself.

I'm using what I had on the shelf for this one, meaning:

- [Adafruit Feather 32u4](https://www.adafruit.com/product/2771) $19.95
- [Cherry MX Blue Switch](https://www.amazon.com/Cherry-switches-MX1AG1NN-Mechanical-Keyboard/dp/B07RQTNS58) $1.3
- 10k Ω Resistor $0.10
- 63 gram [Prusament PETG Urban Grey](https://shop.prusa3d.com/en/prusament/924-prusament-petg-urban-grey-1kg.html) $1.88
- 2 springs
- 2 x M3x12 bolts, 4 x M2x8 bolts
- Some leftover wires

I designed a very simple enclosure that printed in two parts, one serving as both the base plate and the enclosure for the electronics and the second as the hood. I took the inspiration from pedals commonly seen for sewing machines and expression control for synthesizers. STL in /models

Wiring it up was easy (essentially one pushbutton) and I'm using [NicoHood's HID library](https://github.com/NicoHood/HID) which makes the code EXTREMELY short. This projects builds and flashes with [PlatformIO](https://platformio.org/)

![image](https://github.com/coral/footpedal/blob/main/_allrender.png?raw=true)
![image](https://github.com/coral/footpedal/blob/main/_realright.jpg?raw=true)
![image](https://github.com/coral/footpedal/blob/main/_blueprint.png?raw=true)
