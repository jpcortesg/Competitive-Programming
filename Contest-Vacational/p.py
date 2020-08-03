class Pila():
    def __init__(self):
        self.items = []
        self.tamano = 0

    def insertar(self, item):
        self.items.append(item)
        self.tamano += 1

    def eliminar(self):
        self.items.pop()
        self.tamano -= 1

    def vacio(self):
        return self.items == []

    def lleno(self):
        if not self.vacio():
            return True
        return False

    def imprimir(self):
        for x in self.items:
            print(x)

    def reves(self):
        cont = 0
        self.items.reverse()

codigo = input()

pila = Pila()

for x in codigo:
    pila.insertar(x)

pila.imprimir()

pila.reves()

pila.imprimir()
