void ingresarCliente(char clientes[][2][40]);
void imprimirClientes(char clientes[][2][40]);
void listarPeliculas(char peliculas[][4][40]);
void buscarporNombre(char peliculas[][4][40]);
void buscarporGenero(char peliculas[][4][40]);
void comprarTicket(char peliculas[][4][40], double precio[], char clientes[][2][40], int reserva[][4]);
void verCompras(char peliculas[][4][40], double precio[], char clientes[][2][40], int reserva[][4]);
void calcularCostoTotal(double precio[], int reserva[][4]);

void guardarPeliculasEnArchivo(char peliculas[][4][40]);
void cargarPeliculasDesdeArchivo(char peliculas[][4][40]);
void guardarClientesEnArchivo(char clientes[][2][40]);
void cargarClientesDesdeArchivo(char clientes[][2][40]);
void guardarReservasEnArchivo(int reserva[][4]);
void cargarReservasDesdeArchivo(int reserva[][4]);
