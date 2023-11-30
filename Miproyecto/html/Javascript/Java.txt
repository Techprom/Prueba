var fondoActual = 0;
function cambiarFondo(fondo) {
    var fondoElemento = document.getElementById("fondo-td");
    fondoElemento.innerHTML = "<p><img src='" + fondo + "' width='1000px' height='300px'></p>";
}
function desplazarASeccion(contenedor) {
    var contenedorElemento = document.getElementById(contenedor);
    var contenedorOffset = contenedorElemento.offsetTop;

    window.scrollTo({
        top: contenedorOffset,
        behavior: 'smooth' 
    });
}
function cambiarContenido(seccion) {
    document.getElementById("web-code-definicion").innerHTML = "";
    document.getElementById("web-code-historia").innerHTML = "";
    document.getElementById("web-code-beneficio").innerHTML = "";

    document.getElementById("image-container-definicion").innerHTML = "";
    document.getElementById("image-container-historia").innerHTML = "";
    document.getElementById("image-container-beneficio").innerHTML = "";

    cambiarFondo("Imagenes/Fondo.jpg");
    var botones = document.getElementsByClassName("menu-item");
    for (var i = 0; i < botones.length; i++) {
        botones[i].classList.remove("activo");
    }
    switch (seccion) {
        case "Inicio":
            cargarContenido("PROGRAMACIÓN WEB", "La programación para web es un conjunto de técnicas y habilidades utilizadas para desarrollar aplicaciones y sitios web. Involucra la creación de código que se ejecuta en el lado del cliente (navegador del usuario) y en el lado del servidor (el servidor web).", "El concepto de hipertexto es introducido por Ted Nelson en 1965, sentando las bases para la estructura no lineal de la información en la web; Tim Berners-Lee propone el concepto de la World Wide Web en 1989 mientras trabaja en el CERN. En 1990, crea el primer navegador web (WorldWideWeb) y el primer servidor web.", "Beneficios al mundo moderno En el mundo moderno, la programación web se beneficia de una variedad de aspectos que mejoran significativamente la eficiencia y la calidad del desarrollo. La presencia de frameworks y bibliotecas avanzadas proporciona a los desarrolladores herramientas preconstruidas para acelerar el proceso de creación. Además, las herramientas de desarrollo, como los Entornos de Desarrollo Integrados (IDEs) y editores de código, contribuyen a una mayor eficiencia en la escritura y depuración de código. La mejora de las velocidades de Internet permite la entrega rápida de contenido web, facilitando la creación de aplicaciones más interactivas. Navegadores modernos, más rápidos y seguros, garantizan una experiencia consistente y compatible con los estándares web. ", "Pin.jpg", "HistoriaInicio.jpg", "BeneficioIncio.jpg");
            desplazarASeccion("web-code-definicion");
            alert("Curiosidades: La primera página web fue creada por Tim Berners-Lee en 1990 y aún puedes visitar una versión histórica en el CERN")
            cambiarFondo("Imagenes/Fondo.jpg");
            break;
        case "Javascript":
            cargarContenido("Definición Javascript", "Es un lenguaje de programación de alto nivel que se utiliza principalmente para crear contenido interactivo en páginas web..", "En la década de 1990, Netscape desarrolló JavaScript como un lenguaje de programación del lado del cliente para mejorar la interactividad en las páginas web. Aunque inicialmente fue criticado, JavaScript se convirtió en un componente clave para el desarrollo web.", "Beneficios Interactividad en el lado del cliente: JavaScript es un lenguaje de programación del lado del cliente que permite crear páginas web interactivas. Puedes manipular el contenido de la página, responder a eventos del usuario y comunicarte con el servidor sin necesidad de recargar la página.Compatibilidad con todos los navegadores: JavaScript es compatible con la mayoría de los navegadores web modernos, lo que permite crear experiencias web consistentes para los usuarios.", "DefinicionJavascript.jpg", "HistoriaJavascript.jpg", "BeneficioJavascript.jpg");
            desplazarASeccion("web-code-definicion");
            alert("Curiosidades :Brendan Eich creó JavaScript en solo 10 días en 1995, mientras trabajaba en Netscape. ")
            cambiarFondo("Imagenes/FondoJavascript.jpg");
            break;
        case "XHTML":
            cargarContenido("Definición de XHTML", "Es una versión más estricta y extensible del lenguaje de marcado HTML. XHTML sigue las reglas de XML (eXtensible Markup Language) y se utiliza para estructurar el contenido de las páginas web..", "A medida que la web evolucionaba, la necesidad de un estándar más estricto y compatible con XML condujo al desarrollo de XHTML. Esta versión más rigurosa de HTML facilitó una transición suave hacia estándares más modernos y la adopción de prácticas de desarrollo web más estructuradas.", "Beneficios al mundo moderno...Compatibilidad con estándares: XHTML es una versión más estricta y extensible de HTML. Cumple con los estándares XML, lo que facilita la creación de páginas web con estructuras más limpias y coherentes.Separación de contenido y presentación: Al igual que HTML, XHTML permite separar el contenido y la presentación, lo que facilita el mantenimiento y la actualización de los sitios web.", "DefinicionXHTML.jpg", "HistoriaXHTML.jpg", "BeneficioXHTML.jpg");
            desplazarASeccion("web-code-definicion");
            alert("Curiosidades: XHTML (Extensible Hypertext Markup Language) es una versión más estricta y XML-compatible de HTML. Aunque fue promovido, HTML5 finalmente se convirtió en la norma dominante.")
            cambiarFondo("Imagenes/FondoXHTML.jpg");
            break;
        case "CSS":
            cargarContenido("Definición de CSS", "Es un lenguaje de diseño utilizado para controlar la presentación visual de documentos escritos en HTML y XHTML. CSS describe cómo se debe mostrar el contenido, incluidos aspectos como el diseño, los colores y las fuentes..", "A principios de los 90, CSS fue introducido para separar la presentación del contenido en las páginas web. Esto permitió a los desarrolladores controlar el diseño y la apariencia de sus sitios de una manera más eficiente y consistente.", "Beneficios al mundo moderno...Separación de estilos y contenido: CSS permite separar el diseño y la presentación del contenido HTML, lo que facilita la gestión y modificación del estilo sin afectar la estructura de la página.Consistencia visual: Con CSS, puedes aplicar estilos consistentes a través de un sitio web, lo que mejora la apariencia y la experiencia del usuario.Adaptabilidad: CSS facilita la creación de diseños que se adaptan a diferentes dispositivos y tamaños de pantalla, lo que es esencial para la creación de sitios web responsivos.", "DefinicionCSS.jpg", "HistoriaCSS.jpg", "BeneficioCSS.jpg");
            desplazarASeccion("web-code-definicion");
            alert("Curiosidades:CSS (Cascading Style Sheets) permite a los desarrolladores separar la estructura del documento HTML de su presentación, facilitando así la gestión y el mantenimiento del código. ")
            cambiarFondo("Imagenes/FondoCSS.jpg");
            break;
        case "XML":
            cargarContenido("Definición de XML", "Es un lenguaje de marcado similar a HTML, pero más flexible. XML se utiliza para almacenar y transportar datos, permitiendo la creación de documentos con estructuras personalizadas..", "XML, desarrollado en la década de 1990, proporciona un formato de marcado flexible que permite la representación de datos de manera legible tanto por humanos como por máquinas. Se utilizó ampliamente para el intercambio de datos entre aplicaciones.", "Beneficios al mundo moderno...Versatilidad: XML es un formato de marcado que se puede utilizar para almacenar y transportar datos de manera legible tanto para humanos como para máquinas. Es muy versátil y se utiliza en una variedad de aplicaciones, desde intercambio de datos hasta configuración de servicios web.Estructura jerárquica: XML utiliza una estructura jerárquica que facilita la organización y representación de datos complejos.", "DefinicionXML.jpg", "HistoriaXML.jpg", "BeneficioXML.jpg");
            desplazarASeccion("web-code-definicion");
            alert("Curiosidades: XML (eXtensible Markup Language) es utilizado para almacenar y transportar datos, y es conocido por su flexibilidad y extensibilidad. Se utiliza en muchas aplicaciones, incluyendo configuraciones de software y intercambio de datos.")
            cambiarFondo("Imagenes/FondoXML.jpg");
            break;
        case "Servidores":
            cargarContenido("Definición de Servidores", "En el contexto de la tecnología web, un servidor es un programa o un sistema de hardware que responde a las solicitudes de otros programas, conocidos como clientes. Los servidores almacenan, procesan y entregan información a través de la red, como páginas web, archivos, o servicios..", "Con el aumento de la demanda de aplicaciones web dinámicas, los servidores web como Apache e IIS desempeñaron un papel crucial en el alojamiento y la entrega de sitios web. Estos servidores procesan las solicitudes del cliente y devuelven las páginas web generadas dinámicamente.", "Beneficios al mundo moderno...Gestión de recursos: Los servidores son fundamentales para almacenar y gestionar recursos, como bases de datos, archivos y procesamiento de solicitudes, en entornos web.Escalabilidad: Los servidores permiten escalar la capacidad de procesamiento y almacenamiento según las necesidades del sitio web, lo que es crucial para manejar un gran número de usuarios y datos.", "DefinicionServid.jpg", "HistoriaServidores.jpg", "BeneficioServidores.jpg");
            desplazarASeccion("web-code-definicion");
            alert("Curiosidades: El servidor web Apache es uno de los más antiguos y populares. Su nombre se deriva de a patchy server porque inicialmente fue un conjunto de parches para el servidor NCSA.")
            cambiarFondo("Imagenes/FondoServidores.jpg");
            break;
        case "PHP":
            cargarContenido("Definición de PHP", "Es un lenguaje de programación de código abierto especialmente diseñado para el desarrollo web. PHP se ejecuta en el servidor y se utiliza para crear páginas web dinámicas al interactuar con bases de datos y procesar formularios, entre otras tareas..", "A mediados de los 90, PHP se introdujo como un lenguaje de programación del lado del servidor. PHP permitió a los desarrolladores crear páginas web dinámicas al integrar código en el HTML. Su popularidad creció rápidamente debido a su simplicidad y eficacia.", "Beneficios al mundo moderno...Amplia compatibilidad: PHP es compatible con diversos sistemas operativos y servidores web, lo que facilita su implementación en una variedad de entornos.Integración con bases de datos: PHP es eficaz para interactuar con bases de datos, lo que lo hace ideal para el desarrollo de aplicaciones web dinámicas.Gran cantidad de recursos y comunidades: PHP tiene una amplia comunidad de desarrolladores y una gran cantidad de recursos disponibles, como bibliotecas y marcos, que facilitan el desarrollo rápido y eficiente.", "DefinicionPHP.jpg", "HistoriaPHP.jpg", "BeneficioPHP.jpg");
            desplazarASeccion("web-code-definicion");
            alert("Curiosidades: PHP inicialmente significaba Personal Home Page,  pero ahora se interpreta como PHP: Hypertext Preprocessor. Es un lenguaje de programación del lado del servidor ampliamente utilizado.")
            cambiarFondo("Imagenes/FondoPHP.jpg");
            break;
        case "POO":
            cargarContenido("Definición de POO", "Es un paradigma de programación que utiliza objetos para organizar y estructurar el código. Los objetos contienen datos y métodos que operan en esos datos, permitiendo una programación más modular y reutilizable..", "La programación orientada a objetos se convirtió en una metodología esencial para organizar y estructurar el código. Al aplicar principios de POO, los desarrolladores podían modularizar su código, mejorar la reutilización y facilitar el mantenimiento.", "Beneficios al mundo moderno...Reutilización de código: La programación orientada a objetos permite la creación de clases y objetos, lo que facilita la reutilización de código y la organización modular.Abstracción: La POO permite la abstracción de conceptos, lo que facilita la comprensión y el mantenimiento del código.", "DefinicionPOO.jpg", "HistoriaPOO.jpg", "BeneficioPOO.jpg");
            desplazarASeccion("web-code-definicion");
            alert("Curiosidades:La POO es un paradigma de programación que se basa en el concepto de objetos. En PHP, por ejemplo, se introdujo oficialmente la POO en la versión 5. ")
            cambiarFondo("Imagenes/FondoPOO.jpg");
            break;
        case "AJAX":
            cargarContenido("Definición de AJAX", "Es una técnica de desarrollo web que permite actualizar parte de una página sin tener que recargarla por completo..", "A finales de los 90 y principios de los 2000, AJAX revolucionó la interactividad web permitiendo la actualización de partes específicas de una página sin necesidad de recargarla por completo. Esta técnica, que utiliza JavaScript para realizar solicitudes asíncronas al servidor, mejoró significativamente la experiencia del usuario en aplicaciones web.", "Beneficios al mundo moderno...Interactividad asincrónica: AJAX permite la actualización de partes específicas de una página web sin necesidad de recargarla completamente, lo que mejora la experiencia del usuario y reduce el uso de ancho de banda.Mejora la velocidad de carga: Al realizar solicitudes asíncronas al servidor, AJAX puede mejorar la velocidad de carga de las páginas web al cargar solo los datos necesarios en lugar de toda la página.Experiencia de usuario mejorada: La interactividad en tiempo real proporcionada por AJAX mejora la experiencia del usuario al proporcionar respuestas rápidas a acciones específicas sin interrumpir la navegación.", "DefinicionAJAX.jpg", "HistoriaAJAX.jpg", "BeneficioAJAX.jpg");
            desplazarASeccion("web-code-definicion");
            alert("Curiosidades: Contrario a la creencia popular, AJAX no está limitado a XML y JavaScript. Puede trabajar con otros formatos de datos y tecnologías, y su nombre a menudo se usa como un término general para la comunicación asíncrona en el desarrollo web.")
            cambiarFondo("Imagenes/FondoAJAX.jpg");
            break;
    }
    document.getElementById("boton" + seccion).classList.add("activo");
}

function cargarContenido(titulo, definicion, historia, beneficio, imagen, imagenHistoria, imagenBeneficio) {
    var webCodeDefinicion = document.getElementById("web-code-definicion");
    var webCodeHistoria = document.getElementById("web-code-historia");
    var webCodeBeneficio = document.getElementById("web-code-beneficio");

    webCodeDefinicion.innerHTML = "<h2>Definición</h2><p>" + definicion + "</p>";
    webCodeHistoria.innerHTML = "<h2>Historia</h2><p>" + historia + "</p>";
    webCodeBeneficio.innerHTML = "<h2>Beneficios al mundo moderno</h2><p>" + beneficio + "</p>";

    var imageColumnDefinicion = document.getElementById("image-column-definicion");
    var imageColumnHistoria = document.getElementById("image-column-historia");
    var imageColumnBeneficio = document.getElementById("image-column-beneficio");

    imageColumnDefinicion.innerHTML = "<div class='columna-imagen'><p><img src='Imagenes/" + imagen + "' width='200' height='200'></p></div>";
    imageColumnHistoria.innerHTML = "<div class='columna-imagen'><p><img src='Imagenes/" + imagenHistoria + "' width='200' height='200'></p></div>";
    imageColumnBeneficio.innerHTML = "<div class='columna-imagen'><p><img src='Imagenes/" + imagenBeneficio + "' width='200' height='200'></p></div>";
}

function cambiarFondoInicial() {
    cambiarFondo("Imagenes/Fondo.jpg");
}

document.addEventListener("DOMContentLoaded", function () {
    cambiarContenido("Inicio");
});
