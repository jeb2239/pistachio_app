#include "pistache/endpoint.h"
#include "pistache/net.h"
#include "pistache/http.h"
#include "pistache/router.h"
#include "pistache/endpoint.h"
using namespace Pistache;

struct HelloHandler : public Http::Handler {
HTTP_PROTOTYPE(HelloHandler)

    void onRequest(const Http::Request& request, Http::ResponseWriter writer) {
        writer.send(Http::Code::Ok, "Hello, World!");
    }
};

int main() {
    Http::listenAndServe<HelloHandler>("*:9080");
}
