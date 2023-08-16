struct ip_header {
    u_int8_t ihl:4, version:4;
    u_int8_t tos;
    u_int16_t tot_len;
    u_int16_t id;
    u_int16_t frag_off;
    u_int8_t ttl;
    u_int8_t protocol;
    u_int16_t check;
    u_int32_t saddr;
    u_int32_t daddr;
};

struct tcp_header {
    u_int16_t source;
    u_int16_t dest;
    u_int32_t seq;
    u_int32_t ack_seq;
    u_int8_t res1:4, doff:4;
    u_int8_t fin:1, syn:1, rst:1, psh:1, ack:1, urg:1, ece:1, cwr:1;
    u_int16_t window;
    u_int16_t check;
    u_int16_t urg_ptr;
};

