# **TRABAJO PRACTICO N°1**

## EJERCICIO 2  REPASO DE PUNTEROS

### **2.a) Archivo .getignore ¿Por qué es conveniente incluirlo?**

- .gitignore es un archivo utilizado por el sistema de control de versiones Git para especificar qué archivos y directorios deben ser ignorados y no ser rastreados por Git

### **¿Cuándo se debe hacer?**

- Esto es útil para evitar que archivos no deseados (como archivos temporales, archivos compilados, archivos de configuración local, etc.) se incluyan accidentalmente en el repositorio de Git.

### **¿Cómo configuraría el archivo .gitignore?**

- Para configurar un archivo .gitignore, simplemente crea un archivo llamado .gitignore en el directorio raíz de tu repositorio de Git, si aún no existe. Luego, puedes editar este archivo utilizando un editor de texto para agregar reglas que indiquen a Git qué archivos o directorios ignorar. 

1. Especificación de archivos específicos: Puedes especificar archivos específicos que deseas ignorar agregando una línea con el nombre del archivo. Por ejemplo:

_archivo_ignorado.txt_

2. Especificación de patrones de coincidencia: Puedes usar patrones de coincidencia para especificar tipos de archivos o patrones de nombres que deseas ignorar. Algunos ejemplos comunes incluyen:

- Ignorar todos los archivos .log:
_*.log_

- Ignorar todos los archivos en un directorio específico:
_carpeta_a_ignorar/_
- Ignorar todos los archivos de un tipo específico en todos los directorios:
_*.extension_
-Ignorar archivos generados por sistemas operativos o editores:

_.DS_Store   # macOS_
_Thumbs.db   # Windows_

3. Comentarios: Puedes agregar comentarios precedidos por el símbolo # para documentar tu archivo .gitignore. Estos comentarios no afectarán las reglas de ignorar. Por ejemplo:

_# Ignorar archivos de configuración local_
_config.local_

_# Ignorar archivos de registro_
_*.log_

_# Ignorar archivos generados por el sistema operativo macOS_
_.DS_Store_

- Una vez que hayas agregado las reglas necesarias al archivo .gitignore, asegúrate de guardarlo y luego realiza un git add .gitignore seguido de un git commit para que los cambios entren en efecto en tu repositorio de Git. Con esto, Git ignorará los archivos y directorios especificados según las reglas establecidas en el archivo .gitignore.

## EJERCICIO 3 
  ### **Respuesta prgunta c) y d)**
  - El arcivo que se necesita es tp1_1.cpp. Los otros archivos como ejecutables generados, archivos de configuración de Visual Studio Code o archivos temporales, podrían no ser necesarios en el repositorio. Entonces se implementa reglas al archivo .gitignore con el sitio web sitio web https://www.gitignore.io/

  ### **Respuesta prgunta g)**
  - El resultado de los puntos 2 (direccion de memoria almacenada por el puntero) y punto 3 (direccion de la variable), es el mismo debido a que lo que contiene el puntero es la direccion de memoria de la variable a la cual apunta, y si usamos el nombre del puntero, pvariable, nos devolvera dicha direccion y es lo mismo que indicar la direccion de la variable utilizando $variable como argumentos en la funcion printf.
  - En el punto 4 se obtiene una direccion de memoria, pero ésta no es la direccion a la que apunta el puntero si no la direccion propia de la variable puntero, la cual no será igual a las anteriores ya que no se trata de la misma direccion de variable.


