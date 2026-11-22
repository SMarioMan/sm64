FROM ubuntu:24.04 AS build

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        binutils-mips-linux-gnu \
        gcc-mips-linux-gnu \
        build-essential \
        git \
        pkgconf \
        python3 \
        ca-certificates \
        bsdextrautils \
    && rm -rf /var/lib/apt/lists/*

RUN mkdir -p /sm64
WORKDIR /sm64
ENV PATH="/sm64/tools:${PATH}"

CMD echo 'usage: docker run --rm --mount type=bind,source="$(pwd)",destination=/sm64 sm64 make VERSION=us -j4\n' \
         'see https://github.com/n64decomp/sm64/blob/master/README.md for advanced usage'
