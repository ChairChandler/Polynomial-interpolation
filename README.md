# Polynomial interpolation ![travis](https://travis-ci.org/ChairChandler/Polynomial-interpolation.svg?branch=master) ![gpl](https://camo.githubusercontent.com/f6da2176c2099de8e0e906323d7f8acc0c61d5d8/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f6c6963656e73652d47504c2d626c7565)

[Polynomial interpolation](data:image/png;base64,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%0A) is the interpolation of a given data set by the polynomial of lowest possible degree that passes through the points of the dataset.

Example
=========
###### Introduction
Lets assume we have a set X = {1, 2, 3} and set Y = {10, 2, 7} which every value belongs to the value from set X at the same index.

![graph1](https://github.com/ChairChandler/ResourcesRepository/blob/master/graph1.png)

If we want to interpolate the data and find a function that pass to these data the result could be like this.

![graph2](https://drive.google.com/open?id=1TfU1J8G36qbX-FmY4ApL41xWApxqxpUV)

###### Math theory

![eq1](https://render.githubusercontent.com/render/math?math=A%20%3D%20%5C%7Bx%3A%20x%20%5Cin%20R%5C%20%5Cquad%20%5Cland%20%5Cquad%20%7C%5C%7By%3A%20y%20%5Cin%20A%20%5Cland%20y%20%3D%20x%5C%7D%7C%20%3D%201%0A%5C%7D&mode=display)

![eq2](https://render.githubusercontent.com/render/math?math=%5Cforall_%7Be%20%5Cin%20A%7D%20%5Cspace%20%5Cexists_%7Bf%28x%29%7D%20%5Cforall_%7Bz%20%5Cin%20A%5C%20%2C%5C%20z%20%5Cneq%20e%7D%20%5Cquad%0Af%28x%29%20%3D%20a%5Cprod_%7Bi%3D1%7D%5E%7Bi%3D%7CA%7C%7D%28x%20-%20z_i%29%0A%5Cquad%20%5Cland%20%5Cquad%0Ag%28x%29%20%3D%20%5Csum_%7Bi%3D1%7D%5E%7Bi%3D%7CA%7C%7Df_i%28x%29&mode=display)

###### Solution

- ![eq3](https://render.githubusercontent.com/render/math?math=f_1%28x%29%20%3D%20a%28x%20-%202%29%28x%20-%203%29%20%5Cquad%5Cland%5Cquad%20f_1%281%29%20%3D%2010&mode=display)

- ![eq4](https://render.githubusercontent.com/render/math?math=f_2%28x%29%20%3D%20b%28x%20-%201%29%28x%20-%203%29%20%5Cquad%5Cland%5Cquad%20f_2%282%29%20%3D%202&mode=display)

- ![eq5](https://render.githubusercontent.com/render/math?math=f_3%28x%29%20%3D%20c%28x%20-%201%29%28x%20-%202%29%20%5Cquad%5Cland%5Cquad%20f_3%283%29%20%3D%207&mode=display)

- ![eq6](https://render.githubusercontent.com/render/math?math=g%28x%29%20%3D%20f_1%28x%29%20%2B%20f_2%28x%29%20%2B%20f_3%28x%29&mode=display)


![eq7](https://render.githubusercontent.com/render/math?math=g%28x%29%20%3D%205%28x-2%29%28x-3%29%20-%202%28x-1%29%28x-3%29%20%2B%20%5Cfrac%7B7%7D%7B2%7D%28x-1%29%28x-2%29&mode=display)
