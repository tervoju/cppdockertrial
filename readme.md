# c++ docker container trial

# how to build

```
docker build --pull --rm -f "Dockerfile" -t ccontainer:latest "."
```

# how to run

just as example how to mount folder to copy data from container to local folder


```
docker run -d -it --mount type=bind,source=/home/jte/sandbox/ccontainer/pointcloud_data,target=/usr/src/ccontainer/pointcloud_data  ccontainer
```