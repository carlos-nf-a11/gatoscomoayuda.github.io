<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Super Mishis</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            background-color: #dcdcdc;
            color: #333;
        }

        .container {
            max-width: 1200px;
            margin: 0 auto;
            padding: 20px;
            background-color: #f4f4f4;
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
            margin-top: 40px;
        }

        header {
            display: flex;
            justify-content: space-between;
            align-items: center;
            margin-bottom: 20px;
        }

        header h1 {
            font-size: 2rem;
            color: #333;
            margin: 0;
        }

        header p {
            font-size: 1.2rem;
            margin: 0;
            color: #555;
        }

        .image-container {
            display: flex;
            justify-content: space-between;
            flex-wrap: wrap;
            gap: 20px;
        }

        .image-container img {
            width: 100%;
            max-width: 400px;
            height: auto;
            border-radius: 8px;
            box-shadow: 0 2px 6px rgba(0, 0, 0, 0.1);
        }

        .content p {
            font-size: 1rem;
            line-height: 1.6;
            margin-bottom: 20px;
        }

        .button {
            padding: 10px 20px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 5px;
            cursor: pointer;
            font-size: 1rem;
            text-align: center;
        }

        .button:hover {
            background-color: #0056b3;
        }

    </style>
</head>
<body>

    <div class="container">
        <header>
            <h1>Super Mishis</h1>
        </header>
        <p>Por: Carlos Herrera</p>
        <div class="content">
            <p>Bienvenido a nuestra página web de Super Mishis, donde podrás ver una colección de imágenes adorables de nuestros queridos gatos y otros animales. Disfruta navegando por nuestra galería.</p>
            <div class="image-container">
                <img src="img/mrkitty.jpg" alt="Mr. Kitty" style="width: 200px; height: 200px;">
                <img src="img/micola.jpg" alt="Gato Enojado" style="width: 200px; height: 200px;">
                <img src="img/despresiativo.jpg" alt="Gato Huyendo" style="width: 200px; height: 200px;">
                <img src="img/abrigado.jpg" alt="Gato Naranja" style="width: 200px; height: 200px;">
                <img src="img/enojao.jpg" alt="Gato Blanco" style="width: 200px; height: 200px;">
            </div>
            <p>Estos hermosos gatos son parte de nuestra colección de "Super Mishis", ¡un lugar donde los animales adorables tienen su espacio!</p>
            <h2>Conoce a nuestros Super Mishis</h2>
            <p>En esta sección, podrás ver a algunos de nuestros Super Mishis más queridos. Cada uno tiene una personalidad única y una historia especial. Aquí te mostramos más fotos y detalles.</p>
            <div class="image-container">
                <img src="img/WhiteCats.jpg" style="width: 200px; height: 200px;">
                <p style="text-align: center; font-size: 1.2rem; margin: 0px;">Texto entre Gato Durmiendo y Gato Juguetón</p>
                <img src="img/otromiron.jpg" style="width: 200px; height: 200px;">
            </div>
            <p>En esta sección, podrás ver a algunos de nuestros Super Mishis más queridos. Cada uno tiene una personalidad única y una historia especial. Aquí te mostramos más fotos y detalles.</p>
            <div class="image-container" style="text-align: center;">
                <img src="img/amordegato.avif" style="width: auto; height: auto; display: block; margin: 0 auto;">
            </div>
        </div>
    </div>

</body>
</html>
