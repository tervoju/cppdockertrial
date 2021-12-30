
FROM ubuntu:20.04

ENV TZ=Europe/Helsinki \
    DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install --no-install-recommends -y &&\
    apt-get install build-essential -y &&\
    apt-get install cmake -y

# These commands copy your files into the specified directory in the image
# and set that as the working location
COPY . /usr/src/ccontainer
WORKDIR /usr/src/ccontainer

# This command compiles your app using GCC, adjust for your source code
RUN cmake .
RUN make

RUN mkdir pointcloud_data

# This command runs your application, comment out this line to compile only
CMD ["./ccontainer"]

LABEL Name=ccontainer Version=0.0.1
