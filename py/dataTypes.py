#List:
cars = ['Volvo', 'Tata', 'MG']
cars.append("Tesla")
cars.insert(4,"Mazda")
print("List of Cars",cars)
print("Car 1: ",cars[0])
print("Car 2: ",cars[1])
print("Car 3: ",cars[2])
print(type(cars))

carsAsSet = {'Volvo', 'Tata', 'MG'}
#carsAsSet = {'Volvo', 'Tata', 'MG', 'Tata'}    #Unique Only.
print("Set of carsAsSet",carsAsSet)
#print("Car 1: ",carsAsSet[0])   #Not allowed. Not subscriptable.
print(type(carsAsSet))

carsAsTuple = ('Volvo', 'Tata', 'MG')
print("Tuple of carsAsTuple",carsAsTuple)
print("Car 1: ",carsAsTuple[0])
print("Car 2: ",carsAsTuple[1])
print("Car 3: ",carsAsTuple[2])
print(type(carsAsTuple))

carsAsDict = {
    "Volvo": "Best",
    "MG": "Poor"
}
print("Dict of carsAsDict",carsAsDict)
print("Car 1: ",carsAsDict["Volvo"])
print("Car 2: ",carsAsDict["MG"])
print(type(carsAsDict))
