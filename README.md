# parcial

## SOLID

S. Responsabilidad unica: Cada clase se enfoca en una sola cosa (representar un articulo, cliente o pedido)
O. Abierto-Cerrado: Las clases son extensibles gracias a sus interfaces
L. Sustitucion de Liskov: Las clases concretas no hacen cosas fuera de lo esperado gracias a las interfaces y los test, lo que permite su sustitucion por cualquier otra subclase de la misma interfaz
I. Segregacion de interfaces: No hay una super interfaz, sino que hice 3 interfaces pequeñas
D. Inversion de dependencias: Se aplica al exigir en las ordenes de compra las interfaces de los demas objetos en vez de sus concresiones

## IOC se aplica dentro de SOLID (inversion de dependencias)

## RAII

Se utilizan punteros inteligentes (shared_ptr) para garantizar el uso adecuado de la memoria asignada por el sistema

## GRASP

controlador: El main se encarga de la creacion de objetos para no introducir innecesariamente un builder
Experto: Cada clase es experta y eiene la responsabilidad sobre sus propios datos y metodos
Polimorfismo: El codigo se puede expandir facilmente gracias a las interfaces creadas
Indireccion: Los objetos se comunican entre si mediante sus abstracciones disminuyendo el acoplamiento y agregando flexibilidad al diseño
