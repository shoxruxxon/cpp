#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Initials");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({200, 20});
    shape1.setRotation(0);
    shape1.setPosition({40, 100});
    shape1.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({20, 300});
    shape2.setRotation(0);
    shape2.setPosition({40, 100});
    shape2.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({150, 20});
    shape3.setRotation(0);
    shape3.setPosition({60, 250});
    shape3.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({200, 20});
    shape4.setRotation(0);
    shape4.setPosition({40, 400});
    shape4.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape4);

    sf::RectangleShape shape5;
    shape5.setSize({20, 200});
    shape5.setRotation(-90);
    shape5.setPosition({260, 120});
    shape5.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({20, 140});
    shape6.setRotation(0);
    shape6.setPosition({260, 120});
    shape6.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape6);

    sf::RectangleShape shape7;
    shape7.setSize({20, 200});
    shape7.setRotation(-90);
    shape7.setPosition({260, 270});
    shape7.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({20, 140});
    shape8.setRotation(0);
    shape8.setPosition({440, 270});
    shape8.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({20, 200});
    shape9.setRotation(-90);
    shape9.setPosition({260, 420});
    shape9.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape9);

    sf::RectangleShape shape10;
    shape10.setSize({20, 200});
    shape10.setRotation(-15);
    shape10.setPosition({500, 100});
    shape10.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape10);

    sf::RectangleShape shape11;
    shape11.setSize({20, 200});
    shape11.setRotation(15);
    shape11.setPosition({620, 95});
    shape11.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape11);

    sf::RectangleShape shape12;
    shape12.setSize({40, 150});
    shape12.setRotation(0);
    shape12.setPosition({550, 280});
    shape12.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape12);

    window.display();

    sf::sleep(sf::seconds(5));
}
