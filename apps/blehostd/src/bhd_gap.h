#ifndef H_BHD_GAP_
#define H_BHD_GAP_

void bhd_gap_connect(const struct bhd_req *req, struct bhd_rsp *out_rsp);
void bhd_gap_terminate(const struct bhd_req *req, struct bhd_rsp *out_rsp);
void bhd_gap_conn_cancel(const struct bhd_req *req, struct bhd_rsp *out_rsp);
void bhd_gap_scan(const struct bhd_req *req, struct bhd_rsp *out_rsp);
void bhd_gap_scan_cancel(const struct bhd_req *req, struct bhd_rsp *out_rsp);
void bhd_gap_security_initiate(const struct bhd_req *req,
                               struct bhd_rsp *out_rsp);
void bhd_gap_conn_find(const struct bhd_req *req, struct bhd_rsp *out_rsp);
void bhd_gap_adv_start(const struct bhd_req *req, struct bhd_rsp *out_rsp);
void bhd_gap_adv_stop(const struct bhd_req *req, struct bhd_rsp *out_rsp);
void bhd_gap_adv_set_data(const struct bhd_req *req,
                          struct bhd_rsp *out_rsp);
void bhd_gap_adv_rsp_set_data(const struct bhd_req *req,
                              struct bhd_rsp *out_rsp);

#endif
