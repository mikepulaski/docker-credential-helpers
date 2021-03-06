#define SECRET_WITH_UNSTABLE 1
#define SECRET_API_SUBJECT_TO_CHANGE 1
#include <libsecret/secret.h>

const SecretSchema *docker_get_schema(void) G_GNUC_CONST;

#define DOCKER_SCHEMA docker_get_schema()

GError *add(char *server, char *username, char *secret);
GError *delete(char *server);
GError *get(char *server, char **username, char **secret);
