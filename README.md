# Parcial - Registro de Pedidos en C++

Este proyecto es una aplicación de consola en C++ para registrar pedidos de artículos de clientes. Proporciona una estructura sólida y modular siguiendo los principios de diseño SOLID y GRASP.

## Características

- **Registro de Artículos:** Permite cargar información sobre artículos, incluyendo nombre e ID.
- **Registro de Clientes:** Permite cargar información de clientes, incluyendo nombre y DNI.
- **Registro de Pedidos:** Permite asociar clientes y artículos para crear pedidos personalizados.

## Principios y Patrones Aplicados

- **Principios SOLID:**

  - **Responsabilidad Única:** Cada clase se enfoca en una única responsabilidad.
  - **Abierto/Cerrado:** Las clases son extensibles a través de interfaces.
  - **Sustitución de Liskov:** Las clases concretas cumplen con las interfaces y los test.
  - **Segregación de Interfaces:** Se utilizan múltiples interfaces pequeñas.
  - **Inversión de Dependencias (IoC):** Se aplican interfaces en lugar de implementaciones concretas.

- **IOC se aplica dentro de SOLID (inversion de dependencias)**

- **RAII (Resource Acquisition Is Initialization):**

  - Se utilizan punteros inteligentes (`std::shared_ptr`) para una gestión segura de la memoria.

- **Principios de GRASP:**
  - **Controlador:** La aplicación coordina la creación de objetos sin introducir innecesariamente un Builder.
  - **Experto:** Cada clase es experta y responsable de sus propios datos y métodos.
  - **Polimorfismo:** El diseño permite expandirse fácilmente gracias a las interfaces.
  - **Indirección:** Los objetos se comunican a través de sus abstracciones, disminuyendo el acoplamiento y agregando flexibilidad al diseño.

## Cómo Ejecutar el Proyecto

asegurate de estar posicionado dentro del directorio correspondiente al archivo que quieras ejecutar.

- **Proyecto**
  - En Windows: Ejecutar `build.bat`
  - En Linux/Mac: Ejecutar `build.sh`
- **Tests**
  - En Windows: Ejecutar `build_and_execute.bat`
  - En Linux/Mac: Ejecutar `build_and_execute.sh`

Asegúrate de tener un entorno de desarrollo C++ configurado en tu sistema antes de ejecutar el proyecto.

## Contribución

Si deseas contribuir al proyecto, siéntete libre de abrir problemas o enviar solicitudes de extracción. ¡Estoy abierto a mejoras y sugerencias!

## Licencia

Este proyecto se distribuye bajo la licencia [Licencia MIT](LICENSE).
