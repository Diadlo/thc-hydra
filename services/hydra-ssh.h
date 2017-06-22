#ifndef _HYDRA_SERVICE_SSH_H_
#define _HYDRA_SERVICE_SSH_H_

void service_ssh(char *ip, int sp, unsigned char options, char *miscptr, FILE * fp, int port, char *hostname);
int service_ssh_init(char *ip, int sp, unsigned char options, char *miscptr, FILE * fp, int port, char *hostname);
void usage_ssh(const char* service);

#endif /* _HYDRA_SERVICE_SSH_H_ */
