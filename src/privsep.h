#ifndef MLVPN_PRIVSEP_H
#define MLVPN_PRIVSEP_H

#include <stdint.h>
#include <stdio.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netdb.h>

/* privsep */
int priv_init(char *argv[], char *username);
int priv_init_script(char *);
int priv_open_config(char *);
int priv_open_tun(int tuntapmode, char *devname);
FILE *priv_open_log(char *lognam);
int priv_run_script(int argc, char **argv);
void priv_set_running_state(void);
int
priv_getaddrinfo(char *host, char *serv, struct addrinfo **addrinfo,
    struct addrinfo *hints);

void send_fd(int sock, int fd);
int receive_fd(int sock);

#endif