
Overview
--------------------------------------------

* Name: fractal_creator

* Description: 
Fractal Creator. This Demo program is written in C++. 
This project creates a bitmap file  and 
then applies two magnification functions 
to a sector of that file. The bitmap is a graphic image.
The graphic image is a fractal created by the Mandelbrot Set.
A fractal in mathematics is an abstract object used to describe 
and simulate naturally occurring objects. Fractals can also be nearly the 
same at different levels. 

* Author: Gavin Lyons
* Credits: Based on code from www.caveofprogramming.com  

Installation
-----------------------------------------------
For local install on Linux based OS 

* Download github directory
* extract tarball
* 'cd' into same path as Makefile
* run 'make'  to build
* Exe file made at ./Bin/fcsim 
* run 'make help' for all options. 

Usage
------------------------------------------

```
fcsim  [arguments]
fcsim 800 600 0.1 2
```
Arguments list

| Number | Name | Default value | Notes  | 
| -------- | ----------- | ----------- | ----------- |
| 1 | width Resolution | 800 | width of bmp file | 
| 2 | height Resolution| 600 | height of bmp file | 
| 3 | zoom Scale |  0.1 | smaller the number higher the zoom | 
| 4 | number of Zooms | 0 | 0, 1 or 2| 

Output 

-------------------------------------
Bitmap Output files are outputted to:-
where RRRR is random number.

```sh
/tmp/FractalRRRR.BMP
```

![Ss](https://github.com/gavinlyonsrepo/Fractal_creator/blob/master/documentation/screenshots/Fractal_before_zoom.png)
