# Polynomial interpolation ![travis](https://travis-ci.org/ChairChandler/Polynomial-interpolation.svg?branch=master) ![gpl](https://camo.githubusercontent.com/f6da2176c2099de8e0e906323d7f8acc0c61d5d8/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f6c6963656e73652d47504c2d626c7565)

[Polynomial interpolation](https://en.wikipedia.org/wiki/Polynomial_interpolation) is the interpolation of a given data set by the polynomial of lowest possible degree that passes through the points of the dataset.

Example
=========
###### Introduction
Lets assume we have a set X = {1, 2, 3} and set Y = {10, 2, 7} which every value belongs to the value from set X at the same index.

![graph1](https://github.com/ChairChandler/Polynomial-interpolation/blob/master/readme_rsc/graph1.png?raw=true)

If we want to interpolate the data and find a function that pass to these data the result could be like this.

![graph2](https://github.com/ChairChandler/Polynomial-interpolation/blob/master/readme_rsc/graph2.png?raw=true)

###### Math theory

![eq1](https://render.githubusercontent.com/render/math?math=A%20%3D%20%5C%7Bx%3A%20x%20%5Cin%20R%5C%20%5Cquad%20%5Cland%20%5Cquad%20%7C%5C%7By%3A%20y%20%5Cin%20A%20%5Cland%20y%20%3D%20x%5C%7D%7C%20%3D%201%0A%5C%7D&mode=display)

![eq2](https://render.githubusercontent.com/render/math?math=%5Cforall_%7Be%20%5Cin%20A%7D%20%5Cspace%20%5Cexists_%7Bf%28x%29%7D%20%5Cforall_%7Bz%20%5Cin%20A%5C%20%2C%5C%20z%20%5Cneq%20e%7D%20%5Cquad%0Af%28x%29%20%3D%20a%5Cprod_%7Bi%3D1%7D%5E%7Bi%3D%7CA%7C%7D%28x%20-%20z_i%29%0A%5Cquad%20%5Cland%20%5Cquad%0Ag%28x%29%20%3D%20%5Csum_%7Bi%3D1%7D%5E%7Bi%3D%7CA%7C%7Df_i%28x%29&mode=display)

###### Solution

- ![eq3](https://render.githubusercontent.com/render/math?math=f_1%28x%29%20%3D%20a%28x%20-%202%29%28x%20-%203%29%20%5Cquad%5Cland%5Cquad%20f_1%281%29%20%3D%2010&mode=display)

- ![eq4](https://render.githubusercontent.com/render/math?math=f_2%28x%29%20%3D%20b%28x%20-%201%29%28x%20-%203%29%20%5Cquad%5Cland%5Cquad%20f_2%282%29%20%3D%202&mode=display)

- ![eq5](https://render.githubusercontent.com/render/math?math=f_3%28x%29%20%3D%20c%28x%20-%201%29%28x%20-%202%29%20%5Cquad%5Cland%5Cquad%20f_3%283%29%20%3D%207&mode=display)

- ![eq6](https://render.githubusercontent.com/render/math?math=g%28x%29%20%3D%20f_1%28x%29%20%2B%20f_2%28x%29%20%2B%20f_3%28x%29&mode=display)


![eq7](https://render.githubusercontent.com/render/math?math=g%28x%29%20%3D%205%28x-2%29%28x-3%29%20-%202%28x-1%29%28x-3%29%20%2B%20%5Cfrac%7B7%7D%7B2%7D%28x-1%29%28x-2%29&mode=display)
