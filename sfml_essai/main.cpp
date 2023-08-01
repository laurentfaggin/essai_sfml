#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");   
    sf::CircleShape shape(75.f);

    shape.setFillColor(sf::Color::Green);
    shape.setPosition(25, 25);
    sf::Vertex point;
    point.position = sf::Vector2f(100, 100);
    point.color = sf::Color::Blue;

    sf::VertexArray line(sf::Lines, 2);
    line[0].position = sf::Vector2f(150, 120);
    line[0].color = sf::Color::Blue;

    line[1].position = sf::Vector2f(150, 120);
    line[1].color = sf::Color::Red;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.draw(line);
        window.display();
    }

    return 0;
}
