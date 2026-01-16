-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jan 05, 2026 at 06:04 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.0.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `ecomdboct`
--

-- --------------------------------------------------------

--
-- Table structure for table `cart`
--

CREATE TABLE `cart` (
  `cartid` int(11) NOT NULL,
  `uid` int(11) DEFAULT NULL,
  `pid` int(11) DEFAULT NULL,
  `dateof` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `cart`
--

INSERT INTO `cart` (`cartid`, `uid`, `pid`, `dateof`) VALUES
(81, 1, 11, '2025-01-01'),
(82, 1, 2, '2025-01-02'),
(83, 2, 3, '2025-01-02'),
(84, 2, 4, '2025-01-03'),
(85, 3, 5, '2025-01-03'),
(86, 3, 6, '2025-01-04'),
(87, 4, 7, '2025-01-04'),
(88, 4, 8, '2025-01-05'),
(89, 5, 9, '2025-01-05'),
(90, 5, 10, '2025-01-06'),
(91, 6, 11, '2025-01-06'),
(92, 6, 12, '2025-01-07'),
(93, 7, 13, '2025-01-07'),
(94, 7, 14, '2025-01-08'),
(95, 8, 15, '2025-01-08'),
(96, 8, 16, '2025-01-09'),
(97, 9, 17, '2025-01-09'),
(98, 9, 18, '2025-01-10'),
(99, 10, 19, '2025-01-10'),
(100, 10, 2, '2025-01-11');

-- --------------------------------------------------------

--
-- Table structure for table `category`
--

CREATE TABLE `category` (
  `cid` int(11) NOT NULL,
  `cname` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `category`
--

INSERT INTO `category` (`cid`, `cname`) VALUES
(1, 'Mobiles'),
(2, 'Laptops'),
(3, 'Audio'),
(4, 'Footwear'),
(5, 'Fashion'),
(6, 'Home Appliances'),
(7, 'Electronics'),
(8, 'Books');

-- --------------------------------------------------------

--
-- Table structure for table `orders`
--

CREATE TABLE `orders` (
  `orderId` int(11) NOT NULL,
  `cartid` int(11) DEFAULT NULL,
  `ordersatus` varchar(20) DEFAULT NULL,
  `dateoforder` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `orders`
--

INSERT INTO `orders` (`orderId`, `cartid`, `ordersatus`, `dateoforder`) VALUES
(21, 81, 'Placed', '2025-01-01'),
(22, 82, 'Shipped', '2025-01-02'),
(23, 83, 'Delivered', '2025-01-03'),
(24, 84, 'Placed', '2025-01-04'),
(25, 85, 'Cancelled', '2025-01-05'),
(26, 86, 'Placed', '2025-01-06'),
(27, 87, 'Shipped', '2025-01-07'),
(28, 88, 'Delivered', '2025-01-08'),
(29, 89, 'Placed', '2025-01-09'),
(30, 90, 'Delivered', '2025-01-10');

-- --------------------------------------------------------

--
-- Table structure for table `payments`
--

CREATE TABLE `payments` (
  `paymentid` int(11) NOT NULL,
  `paymentType` varchar(50) DEFAULT NULL,
  `transcationId` varchar(100) DEFAULT NULL,
  `amount` float DEFAULT NULL,
  `orderid` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `payments`
--

INSERT INTO `payments` (`paymentid`, `paymentType`, `transcationId`, `amount`, `orderid`) VALUES
(1, 'UPI', 'TXNUPI2101', 69999, 21),
(2, 'Credit Card', 'TXNCC2201', 64999, 22),
(3, 'Debit Card', 'TXNDC2301', 17999, 23),
(4, 'Net Banking', 'TXNNB2401', 24999, 24),
(5, 'UPI', 'TXNUPI2501', 15999, 25),
(6, 'Credit Card', 'TXNCC2601', 58999, 26),
(7, 'Debit Card', 'TXNDC2701', 55999, 27),
(8, 'Net Banking', 'TXNNB2801', 49999, 28),
(9, 'UPI', 'TXNUPI2901', 52999, 29),
(10, 'Credit Card', 'TXNCC3001', 54999, 30);

-- --------------------------------------------------------

--
-- Table structure for table `product`
--

CREATE TABLE `product` (
  `productId` int(11) NOT NULL,
  `productName` varchar(100) DEFAULT NULL,
  `price` float DEFAULT NULL,
  `qty` int(11) DEFAULT NULL,
  `description` varchar(250) DEFAULT NULL,
  `brand` varchar(100) DEFAULT NULL,
  `image` varchar(255) DEFAULT NULL,
  `catid` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `product`
--

INSERT INTO `product` (`productId`, `productName`, `price`, `qty`, `description`, `brand`, `image`, `catid`) VALUES
(2, 'iPhone 14', 69999, 10, 'Apple smartphone with A15 chip', 'Apple', 'iphone14.jpg', 1),
(3, 'Samsung Galaxy S23', 64999, 15, 'Samsung flagship smartphone', 'Samsung', 's23.jpg', 1),
(4, 'Redmi Note 12', 17999, 25, 'Budget Android smartphone', 'Redmi', 'note12.jpg', 1),
(5, 'OnePlus Nord CE', 24999, 20, 'Mid-range smartphone', 'OnePlus', 'nordce.jpg', 1),
(6, 'Realme Narzo 60', 15999, 30, 'Affordable smartphone', 'Realme', 'narzo60.jpg', 1),
(7, 'HP Pavilion Laptop', 58999, 8, '15-inch laptop with Intel i5', 'HP', 'hp_pavilion.jpg', 2),
(8, 'Dell Inspiron', 55999, 12, 'Laptop for daily use', 'Dell', 'inspiron.jpg', 2),
(9, 'Lenovo IdeaPad', 49999, 10, 'Slim laptop', 'Lenovo', 'ideapad.jpg', 2),
(10, 'Asus VivoBook', 52999, 9, 'Lightweight laptop', 'Asus', 'vivobook.jpg', 2),
(11, 'Acer Aspire 7', 54999, 7, 'Gaming laptop entry-level', 'Acer', 'aspire7.jpg', 2),
(12, 'Sony Headphones', 2999, 40, 'Wireless over-ear headphones', 'Sony', 'sony_headphone.jpg', 3),
(13, 'Boat Rockerz 450', 1499, 50, 'Bluetooth headphones', 'Boat', 'boatrockerz.jpg', 3),
(14, 'JBL Flip 5', 8999, 18, 'Portable Bluetooth speaker', 'JBL', 'flip5.jpg', 3),
(15, 'Sony Soundbar', 19999, 6, 'Dolby audio soundbar', 'Sony', 'soundbar.jpg', 3),
(16, 'Boat Stone 1200', 3999, 22, 'Loud Bluetooth speaker', 'Boat', 'stone1200.jpg', 3),
(17, 'Nike Running Shoes', 4999, 20, 'Comfortable running shoes', 'Nike', 'nike_run.jpg', 4),
(18, 'Adidas Sneakers', 4599, 18, 'Casual sneakers', 'Adidas', 'adidas_sneaker.jpg', 4),
(19, 'Puma Sports Shoes', 4299, 15, 'Sports shoes for men', 'Puma', 'puma.jpg', 4),
(20, 'Reebok Trainers', 3999, 12, 'Gym training shoes', 'Reebok', 'reebok.jpg', 4),
(21, 'Sparx Casual Shoes', 1999, 25, 'Affordable casual shoes', 'Sparx', 'sparx.jpg', 4);

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `userId` int(11) NOT NULL,
  `userName` varchar(100) DEFAULT NULL,
  `email` varchar(100) DEFAULT NULL,
  `pwd` varchar(10) DEFAULT NULL,
  `dob` date DEFAULT NULL,
  `contact` varchar(20) DEFAULT NULL,
  `address` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`userId`, `userName`, `email`, `pwd`, `dob`, `contact`, `address`) VALUES
(1, 'Amit Sharma', 'amit@gmail.com', 'amit@123', '1998-05-12', '9876543210', 'Ahmedabad'),
(2, 'Neha Patel', 'neha@gmail.com', 'neha@123', '1999-08-22', '9876543211', 'Ahmedabad'),
(3, 'Rohit Verma', 'rohit@gmail.com', 'rohit@123', '1997-03-18', '9876543212', 'Mumbai'),
(4, 'Priya Singh', 'priya@gmail.com', 'priya@123', '2000-11-05', '9876543213', 'Mumbai'),
(5, 'Karan Mehta', 'karan@gmail.com', 'karan@123', '1996-01-27', '9876543214', 'Pune'),
(6, 'Anjali Desai', 'anjali@gmail.com', 'anjali@123', '1998-09-14', '9876543215', 'Surat'),
(7, 'Vikas Kumar', 'vikas@gmail.com', 'vikas@123', '1995-06-30', '9876543216', 'Mumbai'),
(8, 'Riya Jain', 'riya@gmail.com', 'riya@123', '2001-02-10', '9876543217', 'Surat'),
(9, 'Suresh Yadav', 'suresh@gmail.com', 'suresh@123', '1994-12-25', '9876543218', 'Ahmedabad'),
(10, 'Pooja Nair', 'pooja@gmail.com', 'pooja@123', '1999-07-19', '9876543219', 'Kochi');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `cart`
--
ALTER TABLE `cart`
  ADD PRIMARY KEY (`cartid`),
  ADD KEY `uid` (`uid`),
  ADD KEY `pid` (`pid`);

--
-- Indexes for table `category`
--
ALTER TABLE `category`
  ADD PRIMARY KEY (`cid`);

--
-- Indexes for table `orders`
--
ALTER TABLE `orders`
  ADD PRIMARY KEY (`orderId`),
  ADD KEY `cartid` (`cartid`);

--
-- Indexes for table `payments`
--
ALTER TABLE `payments`
  ADD PRIMARY KEY (`paymentid`),
  ADD KEY `orderid` (`orderid`);

--
-- Indexes for table `product`
--
ALTER TABLE `product`
  ADD PRIMARY KEY (`productId`),
  ADD KEY `catid` (`catid`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`userId`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `cart`
--
ALTER TABLE `cart`
  MODIFY `cartid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=101;

--
-- AUTO_INCREMENT for table `category`
--
ALTER TABLE `category`
  MODIFY `cid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;

--
-- AUTO_INCREMENT for table `orders`
--
ALTER TABLE `orders`
  MODIFY `orderId` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=31;

--
-- AUTO_INCREMENT for table `payments`
--
ALTER TABLE `payments`
  MODIFY `paymentid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT for table `product`
--
ALTER TABLE `product`
  MODIFY `productId` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=22;

--
-- AUTO_INCREMENT for table `users`
--
ALTER TABLE `users`
  MODIFY `userId` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `cart`
--
ALTER TABLE `cart`
  ADD CONSTRAINT `cart_ibfk_1` FOREIGN KEY (`uid`) REFERENCES `users` (`userId`),
  ADD CONSTRAINT `cart_ibfk_2` FOREIGN KEY (`pid`) REFERENCES `product` (`productId`);

--
-- Constraints for table `orders`
--
ALTER TABLE `orders`
  ADD CONSTRAINT `orders_ibfk_1` FOREIGN KEY (`cartid`) REFERENCES `cart` (`cartid`);

--
-- Constraints for table `payments`
--
ALTER TABLE `payments`
  ADD CONSTRAINT `payments_ibfk_1` FOREIGN KEY (`orderid`) REFERENCES `orders` (`orderId`);

--
-- Constraints for table `product`
--
ALTER TABLE `product`
  ADD CONSTRAINT `product_ibfk_1` FOREIGN KEY (`catid`) REFERENCES `category` (`cid`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
