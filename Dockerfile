FROM ubuntu

RUN apt-get update
RUN apt install -y tzdata
ENV TZ=Asia/Tokyo

RUN apt install -y wget \
  g++ \
  cmake \
  git \
  clang-format