/*
** EPITECH PROJECT, 2023
** prototype-raycasting-and-doom_old
** File description:
** struct.h
*/
#ifndef STRUCT_H_
    #define STRUCT_H_
    #include <SFML/Graphics.hpp>
    #include <SFML/Window.hpp>

typedef struct {
    int x;
    int y;
} Vec2;

typedef struct {
    int x;
    int y;
    int z;
} Vec3;
typedef enum shape_type {
    RECTANGLE = 0,
    TRIANGLE,
} shape_type;
typedef enum wall_type {
    SIDE = 0,
    BOTTOM,
    TOP,
} wall_type;
typedef struct wall_s {
    sf::Vector2f point1;
    sf::Vector2f point2;
    sf::Color color;
} wall_t;
typedef struct sectors_s {
    int walls_nb;
    int z1, z2;
    int d;
    sf::Color top;
    sf::Color bottom;
    int *points_surface;
    int surface;
    wall_t *walls;
} sectors_t;
typedef enum map_type {
    RAW_CONFIG = 0,
    DANTE,
} map_type;
typedef struct my_idt1_player {
    float x;
    float y;
    float z;
    int angle;
    int look;
} my_idt1_player;
typedef struct my_idt1_map {
    map_type type;
    sf::Keyboard::Key reload_key;
    sf::RectangleShape sky;
    sf::RectangleShape ground;
    int pixel_scale;
    sf::Vector2f win_size;
    sf::Vector2f opengl_size;
} my_idt1_map;
typedef struct my_idt1 {
    double *pre_cos;
    double *pre_sin;
    char *filepath;
    int no_spam_key;
    int sectors_nb;
    sectors_t **sectors;
    sf::VertexArray points;
    bool joystick_connected;
    my_idt1_player player;
    my_idt1_map map;
} my_idt1;
typedef struct coordinates_wall {
    int x1;
    int x2;
    int bottom1;
    int bottom2;
    int top1;
    int top2;
} coordinates_wall;
#endif /*STRUCT_H_*/
