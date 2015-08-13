# H264Experiment
This repo contains several application or tools related to H264 standard

Hello264.c
----------

This maybe the smallest H264 encoder sample in the world.

You can visit [here](http://www.cardinalpeak.com/blog/worlds-smallest-h-264-encoder/) for details.

How to
------

1. Build the code
    >gcc -Wall -ansi Hello264.c -o hello264

2. Perpare the necessary input(YUV rawdata)
    >ffmpeg -i <input_compressed_clip> -s sqcif -pix_fmt yuv420p angel.yuv

    For a convenient, I already upload a yuv pic with 16 sqcif frames.

3. Run it
    >hello264 < angel.yuv > angel.264

Result
------

After step 3, you can got your encoded file angle.264 which is larger than the input. Cause in this Encoder, we don't compress anything at all.
