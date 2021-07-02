#include<stdio.h>
#include<unistd.h>
#include<stdlib.h> //da vedere se serve
#include<stdbool. h>

bool h_use = false;
bool f_use = false;
bool p_use = false;
bool a_use = false;

int gestioneParametri(char[]);
void printCommand();


int main(int argc, char const *argv[]){

	int opt;
	//char *myargv[argc];
    int myargc = 0;


    //controllo se da linea di comando non hanno inserito i comandi corretti e hanno avviato il client senza niente
    if(argc == 1){

        printf("Parametri mancanti");
        return 0;

    }
    

	while((opt = getopt(argc, argv, ":hf:t:pa:w:W:D:r:R::d:l:u:c:"))!= -1){
		
		switch(opt){
			
			case 'h' :{
				
				if(!h_use){
					
					h_use=true;
					printCommand();
					break;
				}
				
			}
			
			//specifica il nome del socket AF_UNIX a cui connettersi;
			case 'f' :{
				
				if(!f_use){
					
                    config.socket = optarg;
                    f_use = true;
                    break;
                
				} 
				else {
                
					fprintf(stderr, "L'opzione -f può essere eseguita una sola volta.\n");
                    return -1;
                
				}

				
			}
			
			case 'w' :{
				
				//dirname[,n=0]: invia al server i file nella cartella ‘dirname’
				
			}
			
			case 'W' :{
				
				//file1[,file2]: lista di nomi di file da scrivere nel server separati da ‘,’
				
			}
			
			case 'D' :{
				
				//aaaaaaaaaaaaaaa
				
			}
			
			case 'r' :{
				
				//file1[,file2] : lista di nomi di file da leggere dal server separati da ‘,’ (esempio: -r pippo,pluto,minni);
				
			}
			
			case 'R' :{
				
				
				// [n=0] : tale opzione permette di leggere ‘n’ file qualsiasi attualmente memorizzati nel server
				
			}
			
			case 'd' :{
				
				//aaaaaaaaaaaaaaa
				
			}
			
			//tempo in millisecondi che intercorre tra l’invio di due richieste successive al server
			case 't' :{
				
				config.delayTime=optarg;
				
			}
			
			case 'l' :{
				
				//aaaaaaaaaaaaaaa
				
			}
			
			case 'u' :{
				
				//aaaaaaaaaaaaaaa
				
			}
			
			case 'c' :{
				
				//aaaaaaaaaaaaaaa
				
			}
			
			case 'p' :{
				
				//aaaaaaaaaaaaaaa
				
			}
			
			
			
			
		}
		
		
		
		
	}



return 0;
}


//DA MODIFICARE
void printCommand()
{
	printf("\t-h \t\t\tPrints this helper.\n");
    printf("\t-f <sock> \t\tSets socket name to <sock>. \033[0;31m This option must be set once and only once. \033[0m\n");
    printf("\t-p \t\t\tIf set, every operation will be printed to stdout. \033[0;31m This option must be set at most once. \033[0m\n");
    printf("\t-t <time> \t\tSets the waiting time (in milliseconds) between requests. Default is 0.\n");
    printf("\t-a <time> \t\tSets the time (in seconds) after which the app will stop attempting to connect to server. Default value is 5 seconds. \033[0;31m This option must be set at most once. \033[0m\n");
    printf("\t-w <dir>[,<num>] \tSends the content of the directory <dir> (and its subdirectories) to the server. If <num> is specified, at most <num> files will be sent to the server.\n");
    printf("\t-W <file>{,<files>}\tSends the files passed as arguments to the server.\n");
    printf("\t-D <dir>\t\tWrites into directory <dir> all the files expelled by the server app. \033[0;31m This option must follow one of -w or -W. \033[0m\n");
    printf("\t-r <file>{,<files>}\tReads the files specified in the argument list from the server.\n");
    printf("\t-R[<num>] \t\tReads <num> files from the server. If <num> is not specified, reads all files from the server. \033[0;31m There must be no space bewteen -R and <num>.\033[0m\n");
    printf("\t-d <dir> \t\tWrites into directory <dir> the files read from server. If it not specified, files read from server will be lost. \033[0;31m This option must follow one of -r or -R. \033[0m\n");
    printf("\t-l <file>{,<files>} \tLocks all the files given in the file list.\n");
    printf("\t-u <file>{,<files>} \tUnlocks all the files given in the file list.\n");
    printf("\t-c <file>{,<files>} \tDeletes from server all the files given in the file list, if they exist.\n");
    printf("\n");
	
	
}