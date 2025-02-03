#include <stdlib.h>
#include <stdio.h>

void ft_music(const char *script_path) 
{
    printf("Executing the music player script...\n");
    int result = system(script_path);

    if (result == 0) {
        printf("Script executed successfully.\n");
    } else {
        printf("Error: Script execution failed.\n");
    }
}

int main()
{
    ft_music("/home/aingunza/reproducir_musica.sh");
    return 0;
}