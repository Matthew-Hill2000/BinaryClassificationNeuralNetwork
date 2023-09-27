# BinaryClassificationNeuralNetwork

The Neural network in this project is designed to solve the binary classification problem. Given a set of points in $\mathbf{R}^2$, each point is either a blue cross or a red circle, represented by a 1 or -1. The network is trained on some initial data of this description, allowing it to then predict the classification of any other arbitrary point in $\mathbf{R}^2$. The network does this by creating a function of the plane that divides sections of the plane into areas in which a data point is a blue cross and areas in which a data point is a red circle.

To allow matrix and vector equations to be written intuitively throughout the code, two classes named MVector and MMatrix are created within separate header files to be imported into the code. The MVector class has multiple constructors that allow an MVector to be created in a number of ways, such as with no particular size or values, or with specified size and or values. Similarly The MMatrix class has constructors which allow it to be created with a specific number of rows and columns or with no specific amount of each. The header files for each of these objects then overload some common operations needed for each.


# Methodology of Use
