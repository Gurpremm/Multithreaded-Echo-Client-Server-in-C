
#include <stdio.h>
#include <stdlib.h>

#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>


int main(){

	char server_msg[100]= "Hello from server\n";
	int server_socket;
	server_socket=socket(AF_INET, SOCK_STREAM,0);
	
	struct sockadrr_in server_addr;
	server_addr.sin_family= AF_INET;
	server_addr.sin_port=htons(8080);
	server_addr.sin_addr.s_addr= INADDR_ANY;
	
	//Bind the server socket to specified IP and port
	
	if (bind(server_socket, (struct sockaddr*) &server_addr, sizeof(serveraddr)!=-1){
		listen_status= listen( server_socket, 3);
		
		if (listen_status==-1){
			perror("Listen");
			exit(EXIT_FAILURE);
		}
		
		int client_socket;
		client_socket=accpet( server_socket, NULL,NULL);
		
		int send_status;
		send_status= send( client_socket, server_msg, sizeof(server_msg),0);
		close(server_socket);
	}
	else {
		perror("bind failed");
		exit(EXIT_FAILURE);
	}
	 


}

