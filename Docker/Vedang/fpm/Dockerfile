FROM php:7.3.11-fpm

RUN mkdir -p /var/www/html/vhosts


# PHP7, GD, ImageMagick, GraphicsMagick, Memcached, MySQL, Opcache...

RUN apt-get update && apt-get install -y \
    imagemagick \
    graphicsmagick \
    libmemcached-dev \
    zip \
    unzip \
    curl \
    libbz2-dev \
    libpq-dev \
    libxml2-dev \
    libzip-dev \
    unixodbc \
    unixodbc-dev \
    cron \
    supervisor \
    --no-install-recommends \
    && rm -r /var/lib/apt/lists/*



# GD & bcmath
RUN buildRequirements="build-essential libpng-dev libjpeg-dev libfreetype6-dev" \
    && apt-get update && apt-get install -y ${buildRequirements} \
    && docker-php-ext-configure gd --with-freetype-dir=/usr/include/ --with-jpeg-dir=/usr/lib \
    && docker-php-ext-install gd bcmath calendar bz2 pdo_mysql pdo_pgsql pgsql soap zip mbstring pdo pdo_mysql \
    && apt-get purge -y ${buildRequirements} \
    && rm -rf /var/lib/apt/lists/*




# Opcache
RUN docker-php-ext-install opcache

# Redis
RUN pecl install -o -f redis \
    && rm -rf /tmp/pear \
    && docker-php-ext-enable redis

# SQLSRV
RUN pecl install -o -f pdo_sqlsrv \
    && pecl install -o -f sqlsrv \
    && rm -rf /tmp/pear \
    && docker-php-ext-enable sqlsrv \
    && docker-php-ext-enable pdo_sqlsrv

#MongoDB
RUN pecl install -o -f mongodb \
    && rm -rf /tmp/pear \
    && docker-php-ext-enable mongodb

#Mcrypt
RUN apt-get update -y && \
    apt-get install -y libmcrypt-dev && \
    pecl install mcrypt && \
    docker-php-ext-enable  mcrypt

#RUN pecl install sqlsrv

# Zip
# checking for the location of zlib... configure: error: zip support requires ZLIB.
#   Use --with-zlib-dir=<DIR> to specify prefix where ZLIB include and library are located
# RUN docker-php-ext-install zip

# Install extensions using the helper script provided by the base image
RUN docker-php-ext-install mysqli pdo pdo_mysql gettext \
    && docker-php-ext-enable mysqli pdo pdo_mysql bcmath


#CMD ["php-fpm"]

CMD  php-fpm -F -R

EXPOSE 9000

