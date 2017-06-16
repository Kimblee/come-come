/**
*Carrega o mapa de jogo
*/
extern void c_map(char map[23][80], int s_map, int *n_food);

/**
*Cria/Edita mapas
*/
extern void mk_edit_map(int s_map, char function);

/**
*Lista os mapas
*/
extern void list_map(char function);

/**
*Lê a quantidade de mapas
*/
extern int read_n_map(void);
