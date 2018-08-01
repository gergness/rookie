context("test-rookie.R")

test_that("multiplication works", {
  expect_output(rookie_hello(), "Hello.", fixed = TRUE)
})
