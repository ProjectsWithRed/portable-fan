# Portable fan

There is a [video](https://youtu.be/3Dl_9heNABE) associated with this project, which I highly recommend watching if you are going to use this repository.

[![Video](readme_imgs/thumbnail.png)](https://youtu.be/3Dl_9heNABE "Arduino portable fan video")


# Arduino

You can find the Arduino sketch in the `/Portable_Fan` directory.

- Since a potentiometer has noise and is not stable when reading from the ADC pin, to deal with this issue. I simply divide the raw ADC reading of the potentiometer by 100, which means the values can only be from 0-10. This removes all the noise from the lower signicant numbers. I then map this to 0-255 for the duty cycle. This is a very easy way to deal with the potentiometer noise.


# How to upload code to Attiny MCs

- The Attiny MCs can be programmed just like any Arduino and it's very easy to upload code to them.
- You just need a USBASP adapter, then simply make the connections as shown in the image below.

<img src="readme_imgs/usbasp.PNG">


- You will also need to install the Attiny boards using the [AttinyCore](https://github.com/SpenceKonde/ATTinyCore) board manager by placing this link `http://drazzy.com/package_drazzy.com_index.json` to your "Additional Boards Manager URLs", which can be accessed in `File > Preferences`.

- From `Tools > Board`, choose your Attiny board with the no bootloader option.
- Then go to `Tools > Programmer` and choose `USBasp (ATTinyCore)`, and then press `Tools > Burn Bootloader`.
- Then to simply upload code, use `Sketch > Upload Using Programmer`.

- You can use stripboards with some wires to make uploading code to the Attiny MCs more convenient:

<img src="readme_imgs/attiny_stripboards.PNG">


# 3D printing

For all the 3D printed parts, please refer to the `/3d_models` directory.
